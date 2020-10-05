#include <stdio.h>  //including standard I/O header file
#include <stdlib.h>  //including standard library header file
#define MAX_HEIGHT 41  //defining maximum height as 41 

/*user-defined datatype struct used to combine different 
datatypes into single entity*/

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
	int length;
    int width;
    int height;
};
/*typedef can be used to set an alternate name to the struct 
to make it easier to use*/
typedef struct box box;

//function that accepts a struct box b as parameter and returns its volume

int get_volume(box b) {
	return b.length*b.width*b.height;//dot operator is used to access fields
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/

    if(b.height<MAX_HEIGHT)
    return 1;
    else 
    return 0;
}

int main()
{
	int n, i;
	scanf("%d", &n);//user input
	//malloc used to allocate memory 
	box *boxes = malloc(n * sizeof(box));
	//accept length, width and height of n boxes from user
	for ( i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	/*for each box, if the height of the box is lower than max height, 
	print the volume of the box*/
	for ( i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}