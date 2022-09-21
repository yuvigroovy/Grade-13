# HomeWork for 25.10.22
# Yuval Karp - 214501645
# EXC_1

#in order for the file to compile we'll initialize the missing variabels
h=1
m=2
c=3
a=4
b=5
q=6
p=7
t=8

exp_1 = (h+5)/(3+m/7)
exp_2 = c-a*b/6
exp_3 = t+4/(5-9)
exp_4 = (q-3)/(p+2)-p/q

# EXC_2
weight = float(input("enter your weight: \n"))
height = float(input("enter your height: \n"))

print("your BMI is: " + str(weight/height**2))
