import cv2
import numpy as np

org = cv2.imread(r"rose_flower.jpg")
res = cv2.resize(org,(400,400))
#cv2.imshow("original",org)

bgrl = np.array([111,37,0], np.uint8)
bgrh = np.array([255,149,255], np.uint8)

mask = cv2.inRange(res,bgrl, bgrh)

kernel =np.array(([0,2,0],[2,4,2],[0,2,0]),np.uint8)

blurred = cv2.filter2D(mask,-1,kernel)
avg = cv2.blur(mask, (5,5))
median = cv2.medianBlur(mask, 7)
gaus_blur = cv2.GaussianBlur(mask,(5,5),0)
bilateral = cv2.bilateralFilter(mask, 5, 75,75)

pts = np.array([[5,200],[155,200],[80,220]], np.int32)
pts = pts.reshape((-1,1,2))


draw = cv2.ellipse(res,(80,300),(100,75),90,0,360,(218,112,114),-1)
draw = cv2.rectangle(res,(5,380),(155,400),(218,112,114),-1)
cv2.fillPoly(draw,[pts],(0,255,255))



cv2.imshow("original", res)
cv2.imshow("masked", mask)
cv2.imshow("blurred", blurred)
cv2.imshow("average", avg)
cv2.imshow("gaussian", gaus_blur)
cv2.imshow("median", median)
cv2.imshow("bilateral", bilateral)
cv2.imshow("draw",draw)

cv2.imwrite(r"draw.jpg",res)
cv2.imwrite(r"masked.jpg",mask)
cv2.imwrite(r"blurred.jpg",blurred)
cv2.imwrite(r"average.jpg",avg)
cv2.imwrite(r"gaussian.jpg",gaus_blur)
cv2.imwrite(r"median.jpg",median)
cv2.imwrite(r"bilateral.jpg",bilateral)
cv2.imwrite(r"org.jpg",org)





cv2.waitKey(0)
cv2.destroyAllWindows()

