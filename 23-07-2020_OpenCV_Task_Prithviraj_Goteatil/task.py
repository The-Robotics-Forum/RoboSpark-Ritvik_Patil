import cv2
img1 = cv2.imread(r"text.jpg",1)

#conversion
hsv = cv2.cvtColor(img1,cv2.COLOR_RGB2HSV)
gray = cv2.cvtColor(img1,cv2.COLOR_RGB2GRAY)

#size
res = cv2.resize(img1,(460,600))
res2 = cv2.cvtColor(res,cv2.COLOR_RGB2GRAY)

#threshholding
ret,thresh = cv2.threshold(res2,140,255,cv2.THRESH_BINARY)
ret,thresh1 = cv2.threshold(res2,140,255,cv2.THRESH_OTSU)
ret,thresh2 = cv2.threshold(res2,140,255,cv2.THRESH_BINARY_INV)
adaptive_thresh = cv2.adaptiveThreshold(res2,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,9,2)
adaptive_thresh2 = cv2.adaptiveThreshold(res2,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,9,2)


cv2.imshow("unchanged",img1)
cv2.imshow("gray",gray)
cv2.imshow("hsv",hsv)
cv2.imshow("resize",res)
cv2.imshow("resize2",res2)
cv2.imshow('threshhold',thresh)
cv2.imshow('threshhold_otsu',thresh1)
cv2.imshow('threshhold_inv',thresh2)
cv2.imshow('adaptive',adaptive_thresh)
cv2.imshow('adaptive2',adaptive_thresh2)

cv2.imwrite(r"tgray.jpg",gray)
cv2.imwrite(r"thsv.jpg",hsv)
cv2.imwrite(r"tresize.jpg",res)
cv2.imwrite(r"tthreshhold.jpg",thresh)
cv2.imwrite(r"tthreshhold_otsu.jpg",thresh1)
cv2.imwrite(r"tthreshhold_inv.jpg",thresh2)
cv2.imwrite(r"tadaptive.jpg",adaptive_thresh)
cv2.imwrite(r"tadaptive2.jpg",adaptive_thresh2)


cv2.waitKey(0)
cv2.destroyAllWindows()