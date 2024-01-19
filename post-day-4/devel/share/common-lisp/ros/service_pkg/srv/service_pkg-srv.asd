
(cl:in-package :asdf)

(defsystem "service_pkg-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "VectorMagnitude" :depends-on ("_package_VectorMagnitude"))
    (:file "_package_VectorMagnitude" :depends-on ("_package"))
  ))