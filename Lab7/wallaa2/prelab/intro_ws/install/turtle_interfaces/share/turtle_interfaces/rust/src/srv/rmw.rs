#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetColors_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__srv__SetColors_Request__init(msg: *mut SetColors_Request) -> bool;
    fn turtle_interfaces__srv__SetColors_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetColors_Request>, size: usize) -> bool;
    fn turtle_interfaces__srv__SetColors_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetColors_Request>);
    fn turtle_interfaces__srv__SetColors_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetColors_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetColors_Request>) -> bool;
}

// Corresponds to turtle_interfaces__srv__SetColors_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetColors_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub turtle_rgb: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub pen_rgb: [f32; 3],

}



impl Default for SetColors_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__srv__SetColors_Request__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__srv__SetColors_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetColors_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetColors_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetColors_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetColors_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetColors_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetColors_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/srv/SetColors_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetColors_Request() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetColors_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__srv__SetColors_Response__init(msg: *mut SetColors_Response) -> bool;
    fn turtle_interfaces__srv__SetColors_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetColors_Response>, size: usize) -> bool;
    fn turtle_interfaces__srv__SetColors_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetColors_Response>);
    fn turtle_interfaces__srv__SetColors_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetColors_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetColors_Response>) -> bool;
}

// Corresponds to turtle_interfaces__srv__SetColors_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetColors_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SetColors_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__srv__SetColors_Response__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__srv__SetColors_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetColors_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetColors_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetColors_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetColors_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetColors_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetColors_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/srv/SetColors_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetColors_Response() }
  }
}






#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__srv__SetColors() -> *const std::ffi::c_void;
}

// Corresponds to turtle_interfaces__srv__SetColors
#[allow(missing_docs, non_camel_case_types)]
pub struct SetColors;

impl rosidl_runtime_rs::Service for SetColors {
    type Request = SetColors_Request;
    type Response = SetColors_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__srv__SetColors() }
    }
}


