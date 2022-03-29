#!/usr/bin/env python
# coding: utf-8

# In[2]:


otro = 1
while (otro==1):
    n = int(input("Ingrese el numero a calcular el factoral: "))
    f = 1
    i = n
    while(i>1):
        f = f*i
        i = i-1
    print("Su factorial es",f)
    otro=int(input("Si desea otro ingrese 1:")) 


# In[ ]:




