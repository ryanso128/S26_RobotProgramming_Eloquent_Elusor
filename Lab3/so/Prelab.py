class Robot:
    def __init__(self, ID, location):
        self.ID = ID
        self.status = False
        self.location = location
        
    def moveBot(self, newLocation):
        if not self.status:
            print(f"Robot {self.ID} is inactive and cannot move.")
            return
        self.location = newLocation
        print(f"Robot {self.ID} moved to {self.location}")

    def changeStatus(self):
        self.status = not self.status
        status_str = "active" if self.status else "inactive"
        print(f"Robot {self.ID} is now {status_str}")

    def __str__(self):
        status_str = "active" if self.status else "inactive"
        return f"Robot ID: {self.ID}, Status: {status_str}, Location: {self.location}"


if __name__ == "__main__":
     r1 = Robot(1, "A1")
     print(r1)
     
     r1.changeStatus()
     print(r1)
     
     r1.moveBot("B10")
     print(r1)
     
     r1.changeStatus()
     r1.moveBot("C3")
     print(r1)
