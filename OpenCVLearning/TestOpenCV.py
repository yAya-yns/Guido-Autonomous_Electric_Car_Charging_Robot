import cv2
import sys
import numpy
numpy.set_printoptions(threshold=sys.maxsize)

img = cv2.imread('circles.png')
template = cv2.imread('template.png')

mt = cv2.matchTemplate(img,template,cv2.TM_CCOEFF)
print("this is mt")
print(mt)

_,_,_, max_loc = cv2.minMaxLoc(mt)


print("this is max_loc")
print(max_loc)


cv2.rectangle(img,top_left,bottom_right, (0,0,255), 2)
cv2.imwrite('boxed.png',img)
