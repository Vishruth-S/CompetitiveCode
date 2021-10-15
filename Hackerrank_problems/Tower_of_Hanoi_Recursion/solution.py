# Algorithm:
# • Move the top n – 1 disks from Source to Auxiliary tower,
# • Move the n
# th disk from Source to Destination tower,
# • Move the n – 1 disks from Auxiliary tower to Destination tower.
# • Transferring the top n – 1 disks from Source to Auxiliary tower can again be thought
# of as a fresh problem and can be solved in the same manner. Once we solve Towers
# of Hanoi with three disks, we can solve it with any number of disks with the above
#algorithm

def towersofhanoi(disks, source, middle, destination):
  
    if disks == 1:
        print("Move disk 1 to {} tower to {} tower.".format(source,destination))
        return
    towersofhanoi(disks-1, source, destination, middle)
    print("Move disk {} from {} tower to {} tower.".format(disks, source, destination))
    towersofhanoi(disks-1, middle, source, destination)
    
disks = int(input("Enter number of disks : "))
towersofhanoi(disks, 'source', 'middle', 'destination')

# Thank you
