#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__msg__TurtlePose() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__msg__TurtlePose__init(msg: *mut TurtlePose) -> bool;
    fn turtle_interfaces__msg__TurtlePose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TurtlePose>, size: usize) -> bool;
    fn turtle_interfaces__msg__TurtlePose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TurtlePose>);
    fn turtle_interfaces__msg__TurtlePose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TurtlePose>, out_seq: *mut rosidl_runtime_rs::Sequence<TurtlePose>) -> bool;
}

// Corresponds to turtle_interfaces__msg__TurtlePose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TurtlePose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub heading: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: [f32; 2],

}



impl Default for TurtlePose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__msg__TurtlePose__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__msg__TurtlePose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TurtlePose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__TurtlePose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__TurtlePose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__TurtlePose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TurtlePose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TurtlePose where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/msg/TurtlePose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__msg__TurtlePose() }
  }
}


