;; Auto-generated. Do not edit!


(when (boundp 'van_loading::ICPDirection)
  (if (not (find-package "VAN_LOADING"))
    (make-package "VAN_LOADING"))
  (shadow 'ICPDirection (find-package "VAN_LOADING")))
(unless (find-package "VAN_LOADING::ICPDIRECTION")
  (make-package "VAN_LOADING::ICPDIRECTION"))

(in-package "ROS")
;;//! \htmlinclude ICPDirection.msg.html


(defclass van_loading::ICPDirection
  :super ros::object
  :slots (_x _y _angle ))

(defmethod van_loading::ICPDirection
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:angle __angle) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _angle (float __angle))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:angle
   (&optional __angle)
   (if __angle (setq _angle __angle)) _angle)
  (:serialization-length
   ()
   (+
    ;; float32 _x
    4
    ;; float32 _y
    4
    ;; float32 _angle
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _x
       (sys::poke _x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _y
       (sys::poke _y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _angle
       (sys::poke _angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _x
     (setq _x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _y
     (setq _y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _angle
     (setq _angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get van_loading::ICPDirection :md5sum-) "39617ea5ffa910b78cdf07b659b77ce4")
(setf (get van_loading::ICPDirection :datatype-) "van_loading/ICPDirection")
(setf (get van_loading::ICPDirection :definition-)
      "# x distance (forward/back)
float32 x

# y distance (left/right)
float32 y

# angle to turn, positive to right, degrees
float32 angle
")



(provide :van_loading/ICPDirection "39617ea5ffa910b78cdf07b659b77ce4")


