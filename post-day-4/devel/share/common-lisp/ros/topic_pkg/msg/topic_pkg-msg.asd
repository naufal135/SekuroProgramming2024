
(cl:in-package :asdf)

(defsystem "topic_pkg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Topic" :depends-on ("_package_Topic"))
    (:file "_package_Topic" :depends-on ("_package"))
  ))