#Dice Game
from random import randint
import pandas as pd

class Player:
    def __init__(self):
        self.list_of_dice_roll = []
        self.position_history = []
        self.win_status = 0
    
    
    def dice_roll(self,grid_size):
        outcome = randint(1,grid_size)
        self.list_of_dice_roll.append(outcome)
    def update_position(self,outcome):
        self.position_history.append(self.position_history[-1] + outcome)
    def win_status_update(self,grid_size):
        if self.position_history[-1] == grid_size**2:
            self.win_status = 1

number_of_players = int(input("Enter The Number of Players: "))
grid_size = int(input("Enter The Grid Size: "))

players = [Player() for _ in range(number_of_players)]

status = 0
while status==0:
    for player in players:
        outcome = player.dice_roll(grid_size)
        player.update_position(outcome)
        player.win_status_update(grid_size)
        
    if any(player.win_status for player in players):
        status = 1

data = {
    'Players': [player for player in players],
    'Dice Roll History': [player.list_of_dice_roll for player in players],
    'Position History': [player.position_history for player in players],
    'Win Status': [player.win_status for player in players]
}

df = pd.DataFrame(data)
print(df)
