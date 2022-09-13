import example
import time

# print 0 to 1 billion and calculate the time
start = time.time()
i = 0
j=0
while(i<1000000000):
   j = j*2
   i = i + 1
end = time.time()


python_time = end - start

# call example.print_range(1000000000) and calculate the time

start = time.time()
example.print_range(1000000000)
end = time.time()

cpp_time = end - start

#print the time in seconds

print("Python time: ", format(python_time, '.10f'), "s")
print("C++ time: ", format(cpp_time, '.10f'), "s")
