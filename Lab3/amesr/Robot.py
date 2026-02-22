#!/usr/bin/env python3
class Robot:
    def __init__(self, id, status, location):
        self.id = id
        self.status = status
        self.location = location
    def __str__(self):
        return f"Robot ID: {self.id} | Status: {self.status} | Location: {self.location}"
    def moveBot(self, location):
        self.location = location
    def changeStatus(self, status):
        self.status = status

testRobot = Robot(123, False, "A7")
print(testRobot)
testRobot.moveBot("B2")
print(testRobot)