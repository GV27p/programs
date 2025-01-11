import numpy as np
import matplotlib.pyplot as plt
#from lab_util_uni import plt_plt_intuition, plt_stationary, plt_update_onclick, soup_bowl
x_train = np.array([1.0, 1.7, 2.0, 2.5, 3.0, 3.2])
y_train = np.array([250, 300, 480,  430, 630, 730,])
def compute_cost(x,y,w,b):
    m=x.shape[0]
    csum=0
    for i in range(m):
        f_wb=m*x[i]+b
        cost=(f_wb-y[i])**2
        csum=csum+cost
    tcost=(1/(2*m))*csum
    return tcost
ncost=compute_cost(x_train,y_train,200,0.13)
print(ncost)