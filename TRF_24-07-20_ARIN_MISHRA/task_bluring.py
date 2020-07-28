import cv2
import numpy as np


img = cv2.imread("rose_flower.jpg")
res = cv2.resize(img,(280,450))

bgrl = np.array([90,0,200],np.uint8)
bgrh = np.array([235,235,235],np.uint8)
mask = cv2.inRange(res,bgrl,bgrh)

kernel = np.array(([0,0,0],[0,1,0],[0,0,0]),np.uint8)

blur= cv2.filter2D(res,-1,kernel)
avg= cv2.blur(res,(6,6))
bif = cv2.bilateralFilter(res,7,121,110)
med = cv2.medianBlur(res,3)
gaus= cv2.GaussianBlur(res,(5,5),0)

img  = cv2.rectangle(res,(0,220),(150,300),(0,0,0),-1)
img  = cv2.circle(img,(56,235),45,(0,0,0),-1)
font  = cv2.FONT_HERSHEY_COMPLEX
cv2.putText(img,"Flower",(0,245),font ,1,(225,225,225),1)


cv2.imshow("flow",res)
cv2.imshow("mask",mask)
cv2.imshow("blur",blur)
cv2.imshow("average",avg)
cv2.imshow("gaus",gaus)
cv2.imshow("med",med)
cv2.imshow("bilateral",bif)
cv2.imshow("flower pot",img)

cv2.imwrite("E:\TRF_main\mask.jpg",mask)
cv2.imwrite("E:\TRF_main\blur.jpg",blur)
cv2.imwrite("E:\TRF_main\avg.jpg",avg)
cv2.imwrite("E:\TRF_main\gaus.jpg",gaus)
cv2.imwrite("E:\TRF_main\med.jpg",med)
cv2.imwrite("E:\TRF_main\bif.jpg",bif)
cv2.imwrite("E:\TRF_main\text.jpg",img)
cv2.waitKey(0)