;; Auto-generated. Do not edit!


(when (boundp 'service_pkg::VectorMagnitude)
  (if (not (find-package "SERVICE_PKG"))
    (make-package "SERVICE_PKG"))
  (shadow 'VectorMagnitude (find-package "SERVICE_PKG")))
(unless (find-package "SERVICE_PKG::VECTORMAGNITUDE")
  (make-package "SERVICE_PKG::VECTORMAGNITUDE"))
(unless (find-package "SERVICE_PKG::VECTORMAGNITUDEREQUEST")
  (make-package "SERVICE_PKG::VECTORMAGNITUDEREQUEST"))
(unless (find-package "SERVICE_PKG::VECTORMAGNITUDERESPONSE")
  (make-package "SERVICE_PKG::VECTORMAGNITUDERESPONSE"))

(in-package "ROS")





(defclass service_pkg::VectorMagnitudeRequest
  :super ros::object
  :slots (_komponenX _komponenY _komponenZ ))

(defmethod service_pkg::VectorMagnitudeRequest
  (:init
   (&key
    ((:komponenX __komponenX) 0.0)
    ((:komponenY __komponenY) 0.0)
    ((:komponenZ __komponenZ) 0.0)
    )
   (send-super :init)
   (setq _komponenX (float __komponenX))
   (setq _komponenY (float __komponenY))
   (setq _komponenZ (float __komponenZ))
   self)
  (:komponenX
   (&optional __komponenX)
   (if __komponenX (setq _komponenX __komponenX)) _komponenX)
  (:komponenY
   (&optional __komponenY)
   (if __komponenY (setq _komponenY __komponenY)) _komponenY)
  (:komponenZ
   (&optional __komponenZ)
   (if __komponenZ (setq _komponenZ __komponenZ)) _komponenZ)
  (:serialization-length
   ()
   (+
    ;; float64 _komponenX
    8
    ;; float64 _komponenY
    8
    ;; float64 _komponenZ
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _komponenX
       (sys::poke _komponenX (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _komponenY
       (sys::poke _komponenY (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _komponenZ
       (sys::poke _komponenZ (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _komponenX
     (setq _komponenX (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _komponenY
     (setq _komponenY (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _komponenZ
     (setq _komponenZ (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass service_pkg::VectorMagnitudeResponse
  :super ros::object
  :slots (_magnitude ))

(defmethod service_pkg::VectorMagnitudeResponse
  (:init
   (&key
    ((:magnitude __magnitude) 0.0)
    )
   (send-super :init)
   (setq _magnitude (float __magnitude))
   self)
  (:magnitude
   (&optional __magnitude)
   (if __magnitude (setq _magnitude __magnitude)) _magnitude)
  (:serialization-length
   ()
   (+
    ;; float64 _magnitude
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _magnitude
       (sys::poke _magnitude (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _magnitude
     (setq _magnitude (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass service_pkg::VectorMagnitude
  :super ros::object
  :slots ())

(setf (get service_pkg::VectorMagnitude :md5sum-) "55d1a215f43fd1f64eb105a505b172c4")
(setf (get service_pkg::VectorMagnitude :datatype-) "service_pkg/VectorMagnitude")
(setf (get service_pkg::VectorMagnitude :request) service_pkg::VectorMagnitudeRequest)
(setf (get service_pkg::VectorMagnitude :response) service_pkg::VectorMagnitudeResponse)

(defmethod service_pkg::VectorMagnitudeRequest
  (:response () (instance service_pkg::VectorMagnitudeResponse :init)))

(setf (get service_pkg::VectorMagnitudeRequest :md5sum-) "55d1a215f43fd1f64eb105a505b172c4")
(setf (get service_pkg::VectorMagnitudeRequest :datatype-) "service_pkg/VectorMagnitudeRequest")
(setf (get service_pkg::VectorMagnitudeRequest :definition-)
      "float64 komponenX
float64 komponenY
float64 komponenZ
---
float64 magnitude
")

(setf (get service_pkg::VectorMagnitudeResponse :md5sum-) "55d1a215f43fd1f64eb105a505b172c4")
(setf (get service_pkg::VectorMagnitudeResponse :datatype-) "service_pkg/VectorMagnitudeResponse")
(setf (get service_pkg::VectorMagnitudeResponse :definition-)
      "float64 komponenX
float64 komponenY
float64 komponenZ
---
float64 magnitude
")



(provide :service_pkg/VectorMagnitude "55d1a215f43fd1f64eb105a505b172c4")


