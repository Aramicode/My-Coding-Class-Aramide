print ("Hello World")
print("Hey World, This is my first python class!")
message = "This is a new class"
print(message)

# Write a program that calculates the area of a square
# Write the formula: Length * Length
# Measure the length using a davice
# Ask the User for the length
# Calculate the area of the square using the formula(Length * Length)
# We are going to hardcode(opp is dynamic) values; No dynamic values
length = 4
# Calculate the area of the square using the formula(Length * Length)
#area = length * length
#print(area)
#1) Convert your program to accept user input for the length variable and use the
# input to compute the area of the square.
length = float(input("Please Enter the Length: "))
area = length * length
print(area)

#2)First Python Assignment. Create a program that displays your name and complete
#mailing add formatted in an envelope address manner. Your program does not
#need to read any input from the user.
#pseudocodes: Write a program that displays the following:
#Recipient's name
#Recipient's address
#Recipient's city,state and zipcode.

name = ("Ojudun Oluwafunmilayo Aramide")
address =  ("West-Haven, Connecticut, 0600")
phone = 175987759

print(name, address, phone, sep = "\n")
#I used sep (seperator) to convert the space to a newline character.
#I suppose there are other better ways to do this though



#3) Using only the concept taught in class, write a program that accepts a
#user's name and prints it 10times

name = input("Please Enter your name: ")
print(10 * (name + "\n"))
      
