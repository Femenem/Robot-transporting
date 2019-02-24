
(cl:in-package :asdf)

(defsystem "double_ackermann-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "DoubleAckermann" :depends-on ("_package_DoubleAckermann"))
    (:file "_package_DoubleAckermann" :depends-on ("_package"))
  ))