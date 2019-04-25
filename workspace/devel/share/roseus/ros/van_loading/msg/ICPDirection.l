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
  :slots (_x _y _goodness _angle ))

(defmethod van_loading::ICPDirection
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:goodness __goodness) 0.0)
    ((:angle __angle) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _goodness (float __goodness))
   (setq _angle (float __angle))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:goodness
   (&optional __goodness)
   (if __goodness (setq _goodness __goodness)) _goodness)
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
    ;; float64 _goodness
    8
    ;; float64 _angle
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _x
       (sys::poke _x (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _y
       (sys::poke _y (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float64 _goodness
       (sys::poke _goodness (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _angle
       (sys::poke _angle (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _x
     (setq _x (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _y
     (setq _y (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float64 _goodness
     (setq _goodness (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _angle
     (setq _angle (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get van_loading::ICPDirection :md5sum-) "803c0d8508f23245cbb285376956ee7c")
(setf (get van_loading::ICPDirection :datatype-) "van_loading/ICPDirection")
(setf (get van_loading::ICPDirection :definition-)
      "# x distance (forward/back)
float32 x

# y distance (left/right)
float32 y

# how well the models fit together
float64 goodness

# angle to turn, positive to right, degrees
float64 angle
")



(provide :van_loading/ICPDirection "803c0d8508f23245cbb285376956ee7c")


