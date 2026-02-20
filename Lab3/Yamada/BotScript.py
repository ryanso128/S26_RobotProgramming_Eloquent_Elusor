from prelab import Robot #import Robot class

bot1 = Robot(robotID=101, location = "A3")

print(bot1) #print initial state

bot1.moveBot("A1") #move robot
print(bot1) 

bot1.changeStatus() #change status to offline
print(bot1)

bot1.changeStatus() #change status back to online
bot1.moveBot("C7")
print(bot1) 
