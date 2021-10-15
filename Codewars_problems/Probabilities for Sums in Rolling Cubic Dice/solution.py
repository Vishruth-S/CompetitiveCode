# This solution uses recursion to find all the possible combinations of results with an inputted amount of dice 
# It returns the probability of having the sum of all dices equal to an expected sum between all combinations

# After defining in a list all possibile results when using one die the recursive function is defined with the amount of dice and a list as inputs
# In the default case a new list is defined and in it inserted every nested list inside the inputted one is insered with every number from one to six added to it (see example)
# After finishing the loops the function returns itself with the latest list and one less die
# When the dice amount equals to one (base case), it finally returns the list containing every possible result

# The second (2) part loops every nested list and calculates its sum, if equal to 'sum_' the counter goes up
# It finally returns in decimals the probability of finding the expected sum compared to the total cases

def rolldice_sum_prob(sum_, dice_amount):
    
    x = [[1], [2], [3], [4], [5], [6]]
    # 1
    def create_nested_list(dice_amount, list):
      
        if dice_amount == 1: # Base case
            return list      #                           example:
        else:                # Default case              amount = 1 -> [[1], [2], [3], [4], [5], [6]]
            new_list = []    #                           amount = 2 -> [[1, 1], [1, 2], [1, 3], ... [6, 5], [6, 6]] 
            for i in list:   #                           amount = 3 -> [[1, 1, 1], [1, 1, 2], ... [6, 6, 5], [6, 6, 6]]                               
                for j in range(1, 7):
                    new_list.append(i+[j]) 
            return create_nested_list(dice_amount-1, new_list)
    # 2    
    my_lst = create_nested_list(dice_amount, x)
    count = 0
    
    for i in my_lst:
        if sum(i) == sum_:
            count += 1
            
    return count/len(my_lst) # Favourable cases / Total cases
