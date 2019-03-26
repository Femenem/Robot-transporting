
(cl:in-package :asdf)

(defsystem "van_loading-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ICPDirection" :depends-on ("_package_ICPDirection"))
    (:file "_package_ICPDirection" :depends-on ("_package"))
    (:file "ICPDirection" :depends-on ("_package_ICPDirection"))
    (:file "_package_ICPDirection" :depends-on ("_package"))
  ))