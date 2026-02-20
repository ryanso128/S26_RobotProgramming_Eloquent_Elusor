#!/usr/bin/env python3
class Robot:
    """
    Stores the ID, status and location of a robot.
    """
    def __init__(self, id, status, location):
        """
        Initializes a new Robot
        Parameters:
        id [int]: The Robot's identification tag
        status [bool]: Whether the Robot is online
        location [str]: The Robot's current cell position
        """
        self.ID = id
        self.status = status
        self.location = location
    def __str__(self):
        return "Robot " + str(self.ID) + " is currently " + ("online" if self.status else "offline") + " and is located at " + self.location
    def moveBot(self, newPos):
        """
        Updates the Robot's location to match the provided position.
        Parameters:
        newPos [str]: The new location for the Robot.
        """
        self.location = newPos
    def changeStatus(self, newStatus):
        """
        Updates the Robot's status.
        Parameters:
        newStatus [bool]: The Robot's new status.
        """
        self.status = newStatus

if __name__ == "__main__":
    rob1 = Robot(1, True, "A1")
    print(rob1)
    rob1.moveBot("B3")
    print(rob1.location)
    rob1.changeStatus(False)
    print(rob1.status)
    print(rob1)
    rob2 = Robot(2, False, "C10")
    print(rob2)
    rob2.changeStatus(True)
    print(rob2.status)
    rob2.moveBot("D7")
    print(rob2.location)
    print("Robot 1: ", rob1)
    print("Robot 2: ",  rob2)
