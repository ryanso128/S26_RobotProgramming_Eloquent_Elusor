class Robot:
	def __init__(self, num, stat, loc):
		self.IDNumber = num
		self.Status = stat
		self.Location = loc
	def __str__ (self):
		return f"ID: {self.IDNumber}\nStatus: {self.Status}\nLocation: {self.Location}"
	def moveBot(self, loc):
		if self.Status:
			self.Location = loc
		else:
			print("Robot", self.IDNumber, "is offline")
	def changeStatus(self):
		self.Status = not self.Status

if __name__ == "__main__":
	Robot1 = Robot(0,1,"A0")

	print (Robot1)
	Robot1.moveBot("A2")
	print(Robot1)
	Robot1.changeStatus()
	print(Robot1)
	Robot1.moveBot("A0")

