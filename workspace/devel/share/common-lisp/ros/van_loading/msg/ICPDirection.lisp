; Auto-generated. Do not edit!


(cl:in-package van_loading-msg)


;//! \htmlinclude ICPDirection.msg.html

(cl:defclass <ICPDirection> (roslisp-msg-protocol:ros-message)
  ((x
    :reader x
    :initarg :x
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0)
   (goodness
    :reader goodness
    :initarg :goodness
    :type cl:float
    :initform 0.0)
   (angle
    :reader angle
    :initarg :angle
    :type cl:float
    :initform 0.0))
)

(cl:defclass ICPDirection (<ICPDirection>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ICPDirection>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ICPDirection)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name van_loading-msg:<ICPDirection> is deprecated: use van_loading-msg:ICPDirection instead.")))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <ICPDirection>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader van_loading-msg:x-val is deprecated.  Use van_loading-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <ICPDirection>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader van_loading-msg:y-val is deprecated.  Use van_loading-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'goodness-val :lambda-list '(m))
(cl:defmethod goodness-val ((m <ICPDirection>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader van_loading-msg:goodness-val is deprecated.  Use van_loading-msg:goodness instead.")
  (goodness m))

(cl:ensure-generic-function 'angle-val :lambda-list '(m))
(cl:defmethod angle-val ((m <ICPDirection>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader van_loading-msg:angle-val is deprecated.  Use van_loading-msg:angle instead.")
  (angle m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ICPDirection>) ostream)
  "Serializes a message object of type '<ICPDirection>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'goodness))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ICPDirection>) istream)
  "Deserializes a message object of type '<ICPDirection>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'goodness) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'angle) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ICPDirection>)))
  "Returns string type for a message object of type '<ICPDirection>"
  "van_loading/ICPDirection")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ICPDirection)))
  "Returns string type for a message object of type 'ICPDirection"
  "van_loading/ICPDirection")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ICPDirection>)))
  "Returns md5sum for a message object of type '<ICPDirection>"
  "803c0d8508f23245cbb285376956ee7c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ICPDirection)))
  "Returns md5sum for a message object of type 'ICPDirection"
  "803c0d8508f23245cbb285376956ee7c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ICPDirection>)))
  "Returns full string definition for message of type '<ICPDirection>"
  (cl:format cl:nil "# x distance (forward/back)~%float32 x~%~%# y distance (left/right)~%float32 y~%~%# how well the models fit together~%float64 goodness~%~%# angle to turn, positive to right, degrees~%float64 angle~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ICPDirection)))
  "Returns full string definition for message of type 'ICPDirection"
  (cl:format cl:nil "# x distance (forward/back)~%float32 x~%~%# y distance (left/right)~%float32 y~%~%# how well the models fit together~%float64 goodness~%~%# angle to turn, positive to right, degrees~%float64 angle~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ICPDirection>))
  (cl:+ 0
     4
     4
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ICPDirection>))
  "Converts a ROS message object to a list"
  (cl:list 'ICPDirection
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':goodness (goodness msg))
    (cl:cons ':angle (angle msg))
))
