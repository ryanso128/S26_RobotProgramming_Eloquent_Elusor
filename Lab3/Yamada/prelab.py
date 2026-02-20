class Robot: 
	def __init__(self, robotID, location, status =True):
		#initialize robot project 
		self.robotID = robotID #unique robot id number
		self.location = location #current cell location
		self.status = status  #true = online, false = offline
	def moveBot(self, newLocation):
		#move robot to different location
		self.location = newLocation 
		print(f"Robot {self.robotID} moved to {self.location}.")

	def changeStatus(self):
		#change status of robot between online and offline 
		self.status = not self.status
		state = "Online" if self.status else "Offline"
		print(f"Robot {self.robotID} is now {state}.")

	def __str__(self):
		# string representation of robot
		state = "Online" if self.status else "Offline"
		return f"Robot ID: {self.robotID} | Status: {state} | Location: {self.location}"
