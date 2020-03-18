import cv2

capture = cv2.VideoCapture(0);#assuming 0 is the default camera port
fourcc = cv2.VideoWriter_fourcc(*'XVID')
out = cv2.VideoWriter('output.avi',fourcc,20.0,(cv2.CAP_PROP_FRAME_WIDTH,cv2.CAP_PROP_FRAME_HEIGHT))


print("the capture status is :",end=" ") 
print(capture.isOpened())

while(capture.isOpened()):#if there are video passing back through camera
    ret, frame = capture.read()
    if ret == False:
        break

    (capture.get(cv2.CAP_PROP_FRAME_WIDTH))
    (capture.get(cv2.CAP_PROP_FRAME_HEIGHT))

    cv2.imshow('frame',frame)

    if cv2.waitKey(1) & 0XFF == ord('q'):
        break

capture.release()
out.release()
cv2.destroyAllWindows()
        






