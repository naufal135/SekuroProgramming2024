; Auto-generated. Do not edit!


(cl:in-package service_pkg-srv)


;//! \htmlinclude VectorMagnitude-request.msg.html

(cl:defclass <VectorMagnitude-request> (roslisp-msg-protocol:ros-message)
  ((komponenX
    :reader komponenX
    :initarg :komponenX
    :type cl:float
    :initform 0.0)
   (komponenY
    :reader komponenY
    :initarg :komponenY
    :type cl:float
    :initform 0.0)
   (komponenZ
    :reader komponenZ
    :initarg :komponenZ
    :type cl:float
    :initform 0.0))
)

(cl:defclass VectorMagnitude-request (<VectorMagnitude-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VectorMagnitude-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VectorMagnitude-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name service_pkg-srv:<VectorMagnitude-request> is deprecated: use service_pkg-srv:VectorMagnitude-request instead.")))

(cl:ensure-generic-function 'komponenX-val :lambda-list '(m))
(cl:defmethod komponenX-val ((m <VectorMagnitude-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader service_pkg-srv:komponenX-val is deprecated.  Use service_pkg-srv:komponenX instead.")
  (komponenX m))

(cl:ensure-generic-function 'komponenY-val :lambda-list '(m))
(cl:defmethod komponenY-val ((m <VectorMagnitude-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader service_pkg-srv:komponenY-val is deprecated.  Use service_pkg-srv:komponenY instead.")
  (komponenY m))

(cl:ensure-generic-function 'komponenZ-val :lambda-list '(m))
(cl:defmethod komponenZ-val ((m <VectorMagnitude-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader service_pkg-srv:komponenZ-val is deprecated.  Use service_pkg-srv:komponenZ instead.")
  (komponenZ m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VectorMagnitude-request>) ostream)
  "Serializes a message object of type '<VectorMagnitude-request>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'komponenX))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'komponenY))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'komponenZ))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VectorMagnitude-request>) istream)
  "Deserializes a message object of type '<VectorMagnitude-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'komponenX) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'komponenY) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'komponenZ) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VectorMagnitude-request>)))
  "Returns string type for a service object of type '<VectorMagnitude-request>"
  "service_pkg/VectorMagnitudeRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VectorMagnitude-request)))
  "Returns string type for a service object of type 'VectorMagnitude-request"
  "service_pkg/VectorMagnitudeRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VectorMagnitude-request>)))
  "Returns md5sum for a message object of type '<VectorMagnitude-request>"
  "55d1a215f43fd1f64eb105a505b172c4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VectorMagnitude-request)))
  "Returns md5sum for a message object of type 'VectorMagnitude-request"
  "55d1a215f43fd1f64eb105a505b172c4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VectorMagnitude-request>)))
  "Returns full string definition for message of type '<VectorMagnitude-request>"
  (cl:format cl:nil "float64 komponenX~%float64 komponenY~%float64 komponenZ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VectorMagnitude-request)))
  "Returns full string definition for message of type 'VectorMagnitude-request"
  (cl:format cl:nil "float64 komponenX~%float64 komponenY~%float64 komponenZ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VectorMagnitude-request>))
  (cl:+ 0
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VectorMagnitude-request>))
  "Converts a ROS message object to a list"
  (cl:list 'VectorMagnitude-request
    (cl:cons ':komponenX (komponenX msg))
    (cl:cons ':komponenY (komponenY msg))
    (cl:cons ':komponenZ (komponenZ msg))
))
;//! \htmlinclude VectorMagnitude-response.msg.html

(cl:defclass <VectorMagnitude-response> (roslisp-msg-protocol:ros-message)
  ((magnitude
    :reader magnitude
    :initarg :magnitude
    :type cl:float
    :initform 0.0))
)

(cl:defclass VectorMagnitude-response (<VectorMagnitude-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VectorMagnitude-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VectorMagnitude-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name service_pkg-srv:<VectorMagnitude-response> is deprecated: use service_pkg-srv:VectorMagnitude-response instead.")))

(cl:ensure-generic-function 'magnitude-val :lambda-list '(m))
(cl:defmethod magnitude-val ((m <VectorMagnitude-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader service_pkg-srv:magnitude-val is deprecated.  Use service_pkg-srv:magnitude instead.")
  (magnitude m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VectorMagnitude-response>) ostream)
  "Serializes a message object of type '<VectorMagnitude-response>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'magnitude))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VectorMagnitude-response>) istream)
  "Deserializes a message object of type '<VectorMagnitude-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'magnitude) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VectorMagnitude-response>)))
  "Returns string type for a service object of type '<VectorMagnitude-response>"
  "service_pkg/VectorMagnitudeResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VectorMagnitude-response)))
  "Returns string type for a service object of type 'VectorMagnitude-response"
  "service_pkg/VectorMagnitudeResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VectorMagnitude-response>)))
  "Returns md5sum for a message object of type '<VectorMagnitude-response>"
  "55d1a215f43fd1f64eb105a505b172c4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VectorMagnitude-response)))
  "Returns md5sum for a message object of type 'VectorMagnitude-response"
  "55d1a215f43fd1f64eb105a505b172c4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VectorMagnitude-response>)))
  "Returns full string definition for message of type '<VectorMagnitude-response>"
  (cl:format cl:nil "float64 magnitude~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VectorMagnitude-response)))
  "Returns full string definition for message of type 'VectorMagnitude-response"
  (cl:format cl:nil "float64 magnitude~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VectorMagnitude-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VectorMagnitude-response>))
  "Converts a ROS message object to a list"
  (cl:list 'VectorMagnitude-response
    (cl:cons ':magnitude (magnitude msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'VectorMagnitude)))
  'VectorMagnitude-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'VectorMagnitude)))
  'VectorMagnitude-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VectorMagnitude)))
  "Returns string type for a service object of type '<VectorMagnitude>"
  "service_pkg/VectorMagnitude")