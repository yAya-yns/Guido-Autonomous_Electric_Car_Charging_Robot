import numpy as np
import cv2 as cv
#img = cv.imread('coloredPort2.jpg')
img = cv.imread('coloredPort2.jpg')
output = img.copy()
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
gray = cv.GaussianBlur(gray, (9,9),0)
circles = cv.HoughCircles(gray, cv.HOUGH_GRADIENT,100,300)
detected_circles = np.uint16(np.around(circles))
for (x, y ,r) in detected_circles[0, :]:
    cv.circle(output, (x, y), r, (0, 255, 0), 3)
    cv.circle(output, (x, y), 2, (0, 255, 255), 3)
print(circles)

cv.namedWindow('Resized Window', cv.WINDOW_NORMAL)
cv.resizeWindow('Resized Window', 800,600)


cv.imshow('Resized Window',output)
cv.waitKey(0)
cv.destroyAllWindows()
