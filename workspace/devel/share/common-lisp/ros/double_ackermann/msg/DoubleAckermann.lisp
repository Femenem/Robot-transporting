; Auto-generated. Do not edit!


(cl:in-package double_ackermann-msg)


;//! \htmlinclude DoubleAckermann.msg.html

(cl:defclass <DoubleAckermann> (roslisp-msg-protocol:ros-message)
  ((speed
    :reader speed
    :initarg :speed
    :type cl:float
    :initform 0.0)
   (steering
    :reader steering
    :initarg :steering
    :type cl:float
    :initform 0.0)
   (ackermann
    :reader ackermann
    :initarg :ackermann
    :type cl:fixnum
    :initform 0))
)

(cl:defclass DoubleAckermann (<DoubleAckermann>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DoubleAckermann>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DoubleAckermann)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name double_ackermann-msg:<DoubleAckermann> is deprecated: use double_ackermann-msg:DoubleAckermann instead.")))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <DoubleAckermann>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader double_ackermann-msg:speed-val is deprecated.  Use double_ackermann-msg:speed instead.")
  (speed m))

(cl:ensure-generic-function 'steering-val :lambda-list '(m))
(cl:defmethod steering-val ((m <DoubleAckermann>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader double_ackermann-msg:steering-val is deprecated.  Use double_ackermann-msg:steering instead.")
  (steering m))

(cl:ensure-generic-function 'ackermann-val :lambda-list '(m))
(cl:defmethod ackermann-val ((m <DoubleAckermann>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader double_ackermann-msg:ackermann-val is deprecated.  Use double_ackermann-msg:ackermann instead.")
  (ackermann m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DoubleAckermann>) ostream)
  "Serializes a message object of type '<DoubleAckermann>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steering))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'ackermann)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DoubleAckermann>) istream)
  "Deserializes a message object of type '<DoubleAckermann>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steering) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'ackermann) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DoubleAckermann>)))
  "Returns string type for a message object of type '<DoubleAckermann>"
  "double_ackermann/DoubleAckermann")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DoubleAckermann)))
  "Returns string type for a message object of type 'DoubleAckermann"
  "double_ackermann/DoubleAckermann")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DoubleAckermann>)))
  "Returns md5sum for a message object of type '<DoubleAckermann>"
  "14ebedf9d70c67329e96a47f57b9ca37")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DoubleAckermann)))
  "Returns md5sum for a message object of type 'DoubleAckermann"
  "14ebedf9d70c67329e96a47f57b9ca37")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DoubleAckermann>)))
  "Returns full string definition for message of type '<DoubleAckermann>"
  (cl:format cl:nil "# speed, positive forward, m/s~%float32 speed~%~%# steering, positive to the right, radians~%float32 steering~%~%# Four ackermann modes are available:~%# - 0: double ackermann (default),~%# - 1: crabbing (front and back in the same direction).~%# - 2: front ackermann.~%# - 3: back ackermann.~%int8 ackermann~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DoubleAckermann)))
  "Returns full string definition for message of type 'DoubleAckermann"
  (cl:format cl:nil "# speed, positive forward, m/s~%float32 speed~%~%# steering, positive to the right, radians~%float32 steering~%~%# Four ackermann modes are available:~%# - 0: double ackermann (default),~%# - 1: crabbing (front and back in the same direction).~%# - 2: front ackermann.~%# - 3: back ackermann.~%int8 ackermann~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DoubleAckermann>))
  (cl:+ 0
     4
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DoubleAckermann>))
  "Converts a ROS message object to a list"
  (cl:list 'DoubleAckermann
    (cl:cons ':speed (speed msg))
    (cl:cons ':steering (steering msg))
    (cl:cons ':ackermann (ackermann msg))
))
