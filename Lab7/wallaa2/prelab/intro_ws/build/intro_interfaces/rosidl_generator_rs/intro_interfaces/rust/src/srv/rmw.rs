#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "intro_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__intro_interfaces__srv__Area_Request() -> *const std::ffi::c_void;
}

#[link(name = "intro_interfaces__rosidl_generator_c")]
extern "C" {
    fn intro_interfaces__srv__Area_Request__init(msg: *mut Area_Request) -> bool;
    fn intro_interfaces__srv__Area_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Area_Request>, size: usize) -> bool;
    fn intro_interfaces__srv__Area_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Area_Request>);
    fn intro_interfaces__srv__Area_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Area_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Area_Request>) -> bool;
}

// Corresponds to intro_interfaces__srv__Area_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Area_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub shape: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub size: rosidl_runtime_rs::BoundedSequence<f64, 2>,

}



impl Default for Area_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !intro_interfaces__srv__Area_Request__init(&mut msg as *mut _) {
        panic!("Call to intro_interfaces__srv__Area_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Area_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intro_interfaces__srv__Area_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intro_interfaces__srv__Area_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intro_interfaces__srv__Area_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Area_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Area_Request where Self: Sized {
  const TYPE_NAME: &'static str = "intro_interfaces/srv/Area_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__intro_interfaces__srv__Area_Request() }
  }
}


#[link(name = "intro_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__intro_interfaces__srv__Area_Response() -> *const std::ffi::c_void;
}

#[link(name = "intro_interfaces__rosidl_generator_c")]
extern "C" {
    fn intro_interfaces__srv__Area_Response__init(msg: *mut Area_Response) -> bool;
    fn intro_interfaces__srv__Area_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Area_Response>, size: usize) -> bool;
    fn intro_interfaces__srv__Area_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Area_Response>);
    fn intro_interfaces__srv__Area_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Area_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Area_Response>) -> bool;
}

// Corresponds to intro_interfaces__srv__Area_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Area_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub area: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub errflag: i64,

}



impl Default for Area_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !intro_interfaces__srv__Area_Response__init(&mut msg as *mut _) {
        panic!("Call to intro_interfaces__srv__Area_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Area_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intro_interfaces__srv__Area_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intro_interfaces__srv__Area_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { intro_interfaces__srv__Area_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Area_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Area_Response where Self: Sized {
  const TYPE_NAME: &'static str = "intro_interfaces/srv/Area_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__intro_interfaces__srv__Area_Response() }
  }
}






#[link(name = "intro_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__intro_interfaces__srv__Area() -> *const std::ffi::c_void;
}

// Corresponds to intro_interfaces__srv__Area
#[allow(missing_docs, non_camel_case_types)]
pub struct Area;

impl rosidl_runtime_rs::Service for Area {
    type Request = Area_Request;
    type Response = Area_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__intro_interfaces__srv__Area() }
    }
}


