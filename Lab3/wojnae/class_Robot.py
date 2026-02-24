class Robot:
    """
    Robot class with ID, status (online/offline), and location.
    Methods:
      - moveBot(new_location): change the robot's location (e.g., 'A3')
      - changeStatus(): toggle between online and offline
    """

    def __init__(self, id_no: int, online: bool, location: str):
        # Basic validation to avoid accidental bad state
        if not isinstance(id_no, int):
            raise TypeError("id_no must be an integer")
        if not isinstance(online, bool):
            raise TypeError("online must be a boolean")
        if not isinstance(location, str) or not location.strip():
            raise ValueError("location must be a non-empty string like 'A3'")

        self.id_no = id_no
        self.online = online
        self.location = location.strip().upper()

    def __str__(self) -> str:
        status_text = "Online" if self.online else "Offline"
        return f"Robot {self.id_no}: {status_text} at {self.location}"

    # Required methods
    def moveBot(self, new_location: str) -> None:
        """Change the robot's location (e.g., 'B7')."""
        if not isinstance(new_location, str) or not new_location.strip():
            raise ValueError("new_location must be a non-empty string like 'B7'")
        self.location = new_location.strip().upper()

    def changeStatus(self) -> None:
        """Toggle the robot's online/offline status."""
        self.online = not self.online
        
if __name__ == "__main__":
    # Create two robots
    r1 = Robot(id_no=101, online=True, location="A3")
    r2 = Robot(id_no=202, online=False, location="c5")

    # Print initial state (__str__ used here)
    print("Initial states:")
    print(r1)  # Robot 101: Online at A3
    print(r2)  # Robot 202: Offline at C5

    # Move robot 1 and toggle robot 2
    r1.moveBot("B7")
    r2.changeStatus()

    print("\nAfter updates:")
    print(r1)  # Robot 101: Online at B7
    print(r2)  # Robot 202: Online at C5

    # Simple checks (won't print anything if all good)
    assert r1.location == "B7"
    assert r2.online is True

    # Edge case demo (uncomment to see validation in action)
    # Robot("BAD", True, "A1")   # TypeError
    # r1.moveBot("")             # ValueError
