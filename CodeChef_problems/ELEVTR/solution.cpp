#include <stdio.h>
#include <string.h>

#define MIN(_a, _b) ((_a)<(_b)?(_a):(_b))

/********************************************************/
int check_range(int *B, int Max, int N)
{ int i;

  for (i=0; i<N; i++) {
    if ((B[i] != -1) && ((B[i]<1)||(B[i]>Max)))
      return -1;
  }
  return 0;
}

/*********************************************************/
int get_next_index(int *B, int index, int N)
{ int t;


  t = index+1;
  while ((t < N) && (B[t] == -1))
    t++;
  if (t == N)
    t--;
  return t;
}

/*********************************************************/
int complete_seq(int *B, int Max, int N, int initial_direction)
/* Given B[0],..., B[N-1] as in the ELEVATR problem,
   complete the sequence, using the minimal number
   of direction changes.
   Return value:
     -1 : the sequence is invalid, and cannot be completed; e.g., 1 -1 4
    n>=0: the minimal number of direction changes required.
   Upon completion, 'B' will have been altered to contain a sequence
   achieving the minimum.
*/
{ int d, d_changes, j;
  int psteps, nsteps, steps;
  int current_floor, next_floor;
  int current_index, next_index;

  d_changes = 0;
  current_index = 0;
  d = initial_direction;

  current_floor = B[current_index];
  if (current_floor == -1) {
    /* Special case: unknown starting location. */
    next_index = get_next_index(B, current_index, N);
    next_floor = B[next_index];
    if (next_floor == -1) {
      if (d>0) 
        B[next_index] = Max;
      else 
        B[next_index] = 1;
    }

    /* Fill in everything up to 'next_floor'. It's simplest to work backwards: */
    d = initial_direction;
    for (j=next_index-1; j>=0; j--) {
      if ( ((B[j+1]-d)<1) || (B[j+1]-d > Max)) {
        d *= -1;
        d_changes += 1;
      }
      B[j] = B[j+1]-d;
    }
    current_index = next_index;
  }

  d = initial_direction;
  while (current_index < N-1) {
    current_floor = B[current_index];
    next_index = get_next_index(B, current_index, N);
    next_floor = B[next_index];
    
    steps = next_index - current_index;
    if (next_floor > 0) {
      /* Determine the required numbers of positive steps and negative steps as follows: */
      /*   next_floor - current_floor = psteps - nsteps,
                                steps = psteps + nsteps.
         ==> 2*psteps = next_floor - current_floor + steps.
      */
      psteps = next_floor - current_floor + steps;
      if (psteps % 2) return -1;
      if (psteps < 0) return -1;
      psteps /= 2;
      nsteps = steps - psteps;
      if (nsteps < 0) return -1;
    } 
    for (j=0; j<steps; j++) {
      /* Determine if a direction change is needed: */
      if (d > 0) {
        if ((current_floor == Max) || ((next_floor != -1) && (psteps <= 0))) {
          d = -1;
          if (current_index > 0)
          d_changes += 1;
        }
      }
      if (d < 0) {
        if ((current_floor == 1) || ((next_floor != -1) && (nsteps <= 0))) {
          d = 1;
          if (current_index > 0)
            d_changes += 1;
        }
      }
      current_floor += d;
      B[current_index + 1] = current_floor;
      current_index++;
      steps--;
      if (d>0) psteps--;
      else nsteps--;
    }
  }
  return d_changes;
}

/*********************************************************/
int solve_elevatr(int *B, int Max, int N)
{ int B2[100000], k, best, res;

  best = -1;
  /* Do it once with an initial positive direction: */
  memcpy(B2, B, N*sizeof(int));
  res = complete_seq(B2, Max, N, 1);
  if (res >= 0) {
    if ((best == -1) || (res < best)) 
      best = res;
  }

  /* Repeat with an initial negative direction: */
  memcpy(B2, B, N*sizeof(int));
  res = complete_seq(B2, Max, N, -1);
  if (res >= 0) {
    if ((best == -1) || (res < best)) 
      best = res;
  }
  return best;
}

/********************************************************/
int elevatr()
{ int B[100000], Max, N;
  int i, res, x;

  scanf("%d %d\n", &N, &Max);
  for (i=0; i<N; i++)
    scanf("%d", &B[i]);

  if (check_range(B, Max, N)) 
    return -1;
  res = solve_elevatr(B, Max, N);
  return res;
}

/********************************************************/
int main(void) 
{ int T, i;

  scanf("%d", &T);
  for (i=0; i<T; i++) 
    printf("%d\n", elevatr());
  return 0;
}
/* the code is implemented by Swagata Srimani


