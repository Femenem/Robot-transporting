;; Auto-generated. Do not edit!


(when (boundp 'double_ackermann::DoubleAckermann)
  (if (not (find-package "DOUBLE_ACKERMANN"))
    (make-package "DOUBLE_ACKERMANN"))
  (shadow 'DoubleAckermann (find-package "DOUBLE_ACKERMANN")))
(unless (find-package "DOUBLE_ACKERMANN::DOUBLEACKERMANN")
  (make-package "DOUBLE_ACKERMANN::DOUBLEACKERMANN"))

(in-package "ROS")
;;//! \htmlinclude DoubleAckermann.msg.html


(defclass double_ackermann::DoubleAckermann
  :super ros::object
  :slots (_speed _steering _ackermann ))

(defmethod double_ackermann::DoubleAckermann
  (:init
   (&key
    ((:speed __speed) 0.0)
    ((:steering __steering) 0.0)
    ((:ackermann __ackermann) 0)
    )
   (send-super :init)
   (setq _speed (float __speed))
   (setq _steering (float __steering))
   (setq _ackermann (round __ackermann))
   self)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:steering
   (&optional __steering)
   (if __steering (setq _steering __steering)) _steering)
  (:ackermann
   (&optional __ackermann)
   (if __ackermann (setq _ackermann __ackermann)) _ackermann)
  (:serialization-length
   ()
   (+
    ;; float32 _speed
    4
    ;; float32 _steering
    4
    ;; int8 _ackermann
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steering
       (sys::poke _steering (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int8 _ackermann
       (write-byte _ackermann s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _speed
     (setq _speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steering
     (setq _steering (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int8 _ackermann
     (setq _ackermann (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _ackermann 127) (setq _ackermann (- _ackermann 256)))
   ;;
   self)
  )

(setf (get double_ackermann::DoubleAckermann :md5sum-) "14ebedf9d70c67329e96a47f57b9ca37")
(setf (get double_ackermann::DoubleAckermann :datatype-) "double_ackermann/DoubleAckermann")
(setf (get double_ackermann::DoubleAckermann :definition-)
      "# speed, positive forward, m/s
float32 speed

# steering, positive to the right, radians
float32 steering

# Four ackermann modes are available:
# - 0: double ackermann (default),
# - 1: crabbing (front and back in the same direction).
# - 2: front ackermann.
# - 3: back ackermann.
int8 ackermann

")



(provide :double_ackermann/DoubleAckermann "14ebedf9d70c67329e96a47f57b9ca37")


