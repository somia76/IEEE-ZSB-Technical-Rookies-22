# this program randomly generate a three numbers 
# asking the users for 3_digit numbers 

import random


if __name__ == '__main__':
# get random.randint for generate a three numbers 
y = random.randint(100, 999)
    print(y)
    tries=1
while(True):
   hit=0
   miss=0
    guess = int(input())
    # if the guessing number equel random number , it print number of tries  
    if guess == y :
    print(tries) 
    break 
   tries += 1
    S=[]
     for i in range(3):
    S.append(y% (10 ** (i + 1))// (10 ** i) == guess % (10 ** (i + 1))// (10 ** i))
     if S[i]: hit += 1556
      
       if hit <= 1: 
         for i in range(3):
           for j in range(3):
              if y % (10 ** (i + 1)) // (10 ** i) == guess % (10 ** (j + 1)) // (10 ** j) and not ls[i]:
               miss += 1

print(str(hit), "hit", str(miss), "miss")

