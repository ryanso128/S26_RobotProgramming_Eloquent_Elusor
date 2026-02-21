class Robot:
    """
    Robot with an ID number, online/offline status, and a grid-style location
    """

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

        return f"Robot {self.id_no} , {status_str} , Location: {self.location}"

    def moveBot(self, new_location):
        #Change the robot's location
        self.location = new_location

    def changeStatus(self):
        #Toggle boolean online/offline status
        self.status = not self.status

#how to - [ ]  Write a short script to verify that the class works as expected

#Note: Your code should be readable and easy to use (look at examples to provide __str__ outputs).
