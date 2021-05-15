name = 'Alice'
if name == 'Alice':
    print('Hi Alice')
print('Done')

nameBoy = 'Jimmer'
if nameBoy == 'James':
    print('Hi James')
else:
    print('Hi Jimmer')

myName = 'Bobby'
age = 3000
if myName == 'Alice':
    print('Hi Alice')
elif age < 12:
    print('you are not Alice, kiddo')
elif age > 2000:
    print('Yo Bobby!')

spam = 0
while spam < 5:
    print('Hi world')
    spam = spam + 1

testName = ''
while testName != 'your name':
    print('Please type your name')
    testName = input()
print('thanks')

#sweet gauss calc
total = 0
for i in range(101):
    total = total + i
print(total)