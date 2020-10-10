while True: #Taken if User Want to play game again
    v=1 #Counter how many values are filled in board
    board=[' ']*10 #Setting all values to blank in board
    player='' #Will store which player is playing
    val=False #For Checking if any player won or not

    def printTable():
            for i in range(1,10):
                    print(board[i],end=' ')
                    if(i%3==0 and i!=9):
                            print("\n",'-'*8)
                    elif i!=9:
                            print('|',end=' ')
                            
    print("\nWelcome to Tic Tac Toe Game :)\nHope you have pleasent experience ;)\n")
    printTable()

    while True:
            val=input("\n\nEnter O or X ") #Taking 1st user value if its O or X
            if val.lower()=='o' or val=='0': #Check if it is O 
                    player='O'  # set player to O
                    break;
            elif val.lower()=='x': #Check if it is X
                    player='X' # set player to X
                    break;
            else: #When neither O nor X entered
                print("You are not entering O or X alphabet, try again")

#Function for win Situation Return True if player Win else False, Player is taken as parameter because by default blank is assigned to all
                #on equating 2 blank it will return true even if that position are empty

    def test(player):
            if board[1]==board[2] and board[2]==board[3] and board[3]==player: #123 1st row
                     return True
            elif board[4]==board[5] and board[5]==board[6] and board[6]==player: #456 2nd row 
                    return True
            elif board[7]==board[8] and board[8]==board[9] and board[9]==player: #789 rd row
                    return True
            elif board[1]==board[5] and board[5]==board[9] and board[9]==player: #1st column
                    return True
            elif board[3]==board[5] and board[5]==board[7] and board[7]==player: #2nd column
                    return True
            elif board[1]==board[4] and board[4]==board[7] and board[7]==player: #3rd column
                    return True
            elif board[2]==board[5] and board[5]==board[8] and board[8]==player: #Diagnal 1
                    return True
            elif board[3]==board[6] and board[6]==board[9] and board[9]==player: #Diagnal 2
                    return True      
            else:
                    return False

    while v!=10: #Will Run until whole board is filled  
            position=input('\nEnter position ') #Taken Position
            while position not in ['1','2','3','4','5','6','7','8','9']: #if invalid position entered
                    print("You are not entering correct position, try natural numbers less than 10\n")
                    position=input('Enter position ') #taken position again
            if(board[int(position)]==' '): #check position is empty 
                    board[int(position)]=player  #fill board with O/X at entered position
                    v=v+1 #Updating count of number of positions filled in board
                    printTable() #Print Table
                    if v>4: #Minimum 5 values is needed to be filled in order to Win (In Total of X and O )
                        if test(player): #If any player had won before filling the entire board it will break and Val becomes true, initially Declared false at top. 
                            val=True
                            break
                    if player=='X': #Player will Swap after every turn
                            player='O'
                    else:
                            player='X'
            else:
                print("Position is already Occupied") #if position is already filled again position is asked , end of while loop
    if val==True: 
            print("\n\n",player," Wins the game ;p\nThanks for playing with us")
    else:
            print("\nDraw\nThanks for playing with us ;p")
    play=input("\nPress Y if you wanna play again\n") #Ask user if he want to play again
    if play.lower()!='y': #Check if is any other value than Y or y then break, program will be terminated, if Y is enteree control will go to 1st line while loop
        print("Come Back Soon :( ")
        break
