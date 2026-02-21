class Robot:
    
    #Robot with an ID number, online/offline status, and a grid-style location
    

    def __init__(self, id_number, status=True, location="A1"):
        """
        Args:
            - id_number: ID number
            - status: online/offline [a boolean flag]
            - location: cell number such as A3
        """
        self.id_number = id_number
        self.status = bool(status)
        self.location = location

    def __str__(self):
        if self.status:
            status_str = "ONLINE"
        else:
            status_str = "OFFLINE"

        return f"Robot {self.id_number}, {status_str}, Location: {self.location}"

    def moveBot(self, new_location):
        #Change the robot's location
        self.location = new_location

    def changeStatus(self):
        #Toggle boolean online/offline status
        self.status = not self.status

#note to self: Write a short script to verify that the class works as expected 
#"Your code should be readable and easy to use (look at examples to provide __str__ outputs)."

if __name__ == "__main__":

    bot1 = Robot(662043177)
    print(bot1)

    # Move robot
    bot1.moveBot("C4")
    print(bot1)

    # Change status to offline
    bot1.changeStatus()
    print(bot1)

    # Change status back online and move again
    bot1.changeStatus()
    bot1.moveBot("C3")
    print(bot1)

