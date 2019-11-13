#0416.py
import cv2
src = cv2.imread('../data/lena.jpg')

rows, cols, channels = src.shape

# (rows/2, cols/2) 를 기준으로 scale=0.5 로 축소하고
#   angle=45(반시계방향)로 회전한 어파인 변환행렬 M1 생성
M1 = cv2.getRotationMatrix2D((rows / 2, cols / 2), 45, 0.5)
M2 = cv2.getRotationMatrix2D((rows / 2, cols / 2), -45, 1.0)

dst1 = cv2.warpAffine(src, M1, (rows, cols))
dst2 = cv2.warpAffine(src, M2, (rows, cols))

cv2.imshow('dst1', dst1)
cv2.imshow('dst2', dst2)
cv2.waitKey()
cv2.destroyAllWindows()


