def maximizeTransactions(transaction):
    # to calculate the balance after each transaction
    balance = 0
    # to count the number of transactions
    count = 0
    
    # loop through the transaction list amount
    for money in transaction:
        
        # if the transaction amount is positive, then add it to the balance
        if(money>0):
            # increment the transaction count
            count = count + 1
            balance = balance + money
            
        # if money is negative check --> if balance is greater than 0
        # as well as check if money reduced from the balance does not turn the balance into negative
        # i.e balance must remain positive or 0 after reduction. 
        # If all the conditions satisfy
        elif(money<0 and balance>0 and ((balance + money) >= 0)):
            
            # reduce the money from the balance 
            # note that money is already a negative integer hence plus sign is used to add money to the balance 
            balance = balance + money
            # increment the transaction count
            count = count + 1
            
        # else skip the transaction and move to the next transaction amount
    
    # return the total count of transactions
    return count
            

# get the number of transactions from the user
n = int(input())
# list to store the transactions
transaction = []

# loop to get the transaction amount from the user
for i in range(n):
    
    # get transaction amount
    money = int(input())
    
    # store the amount in the transaction list
    transaction.append(money)

# print the transaction list
print("transaction = ", transaction)

# call to the maximum transaction function
print("Maximum number of transactions possible: ",maximizeTransactions(transaction))
