import cv2

def main():
    # Open the default camera (camera index 0)
    video_capture = cv2.VideoCapture(0)

    if not video_capture.isOpened():
        print("Could not open video capture.")
        return

    while True:
        # Capture frame-by-frame
        ret, frame = video_capture.read()

        if not ret:
            print("Could not read frame from camera!")
            break

        # Display the resulting frame
        cv2.imshow('Camera Feed', frame)

        # Exit the loop when 'q' is pressed
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    # Release the camera and close any OpenCV windows
    video_capture.release()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()

