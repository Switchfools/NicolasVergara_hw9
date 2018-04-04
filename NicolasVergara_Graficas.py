import numpy as np
import matplotlib.pylab as plt
Python= np.loadtxt('times_python.csv')
Cpp= np.loadtxt('times_cpp.csv')
Númerodelasucesion=range(len(Python));
plt.plot(Númerodelasucesion,Python,color='teal',label='Python')
plt.plot(Númerodelasucesion,Cpp,color='gold',label='C++')
plt.xlabel('n-esimo Número de fibonacci')
plt.ylabel('tiempo requerido para calcularlo')
plt.savefig('cpp_vs_python.png')
