import cv2

def getCorners(center,r):
    topleft = (int(center[0]-r),int(center[1]-r)) 
    bottomright = (int(center[0]+r),int(center[1]+r))
    return [topleft,bottomright]

img = cv2.imread('circles.png')
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
gray = cv2.GaussianBlur(gray,(9,9),0)

circles = cv2.HoughCircles(gray, cv2.HOUGH_GRADIENT, 2,20)
print("this is circles")
print(circles)
print("this is circles[0]")
print(circles[0])
print("this is circles[0][0]")
print(type(circles[0][0]))
#print(circles)
#print(circles)

c = getCorners([151,223],73.8)
cv2.rectangle(img,c[0],c[1],(0,0,255),2)
cv2.imwrite('boxedHough.png',img)


