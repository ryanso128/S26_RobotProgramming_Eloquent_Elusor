
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_Goal() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_Goal__init(msg: *mut MakeSquare_Goal) -> bool;
    fn turtle_interfaces__action__MakeSquare_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Goal>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Goal>);
    fn turtle_interfaces__action__MakeSquare_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Goal>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub square_size: f32,

}



impl Default for MakeSquare_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_Goal__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_Goal() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_Result() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_Result__init(msg: *mut MakeSquare_Result) -> bool;
    fn turtle_interfaces__action__MakeSquare_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Result>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Result>);
    fn turtle_interfaces__action__MakeSquare_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Result>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub final_pose: super::super::msg::rmw::TurtlePose,

}



impl Default for MakeSquare_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_Result__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_Result where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_Result() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_Feedback__init(msg: *mut MakeSquare_Feedback) -> bool;
    fn turtle_interfaces__action__MakeSquare_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Feedback>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Feedback>);
    fn turtle_interfaces__action__MakeSquare_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_Feedback>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_pose: super::super::msg::rmw::TurtlePose,

}



impl Default for MakeSquare_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_Feedback__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_Feedback() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_FeedbackMessage__init(msg: *mut MakeSquare_FeedbackMessage) -> bool;
    fn turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_FeedbackMessage>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_FeedbackMessage>);
    fn turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_FeedbackMessage>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MakeSquare_Feedback,

}



impl Default for MakeSquare_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_FeedbackMessage() }
  }
}




#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_SendGoal_Request__init(msg: *mut MakeSquare_SendGoal_Request) -> bool;
    fn turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Request>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Request>);
    fn turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Request>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MakeSquare_Goal,

}



impl Default for MakeSquare_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_SendGoal_Request() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_SendGoal_Response__init(msg: *mut MakeSquare_SendGoal_Response) -> bool;
    fn turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Response>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Response>);
    fn turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_SendGoal_Response>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MakeSquare_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_SendGoal_Response() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_GetResult_Request__init(msg: *mut MakeSquare_GetResult_Request) -> bool;
    fn turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Request>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Request>);
    fn turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Request>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MakeSquare_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_GetResult_Request() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__MakeSquare_GetResult_Response__init(msg: *mut MakeSquare_GetResult_Response) -> bool;
    fn turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Response>, size: usize) -> bool;
    fn turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Response>);
    fn turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MakeSquare_GetResult_Response>) -> bool;
}

// Corresponds to turtle_interfaces__action__MakeSquare_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MakeSquare_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MakeSquare_Result,

}



impl Default for MakeSquare_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__MakeSquare_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__MakeSquare_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MakeSquare_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MakeSquare_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MakeSquare_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/MakeSquare_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__MakeSquare_GetResult_Response() }
  }
}






#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__MakeSquare_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to turtle_interfaces__action__MakeSquare_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MakeSquare_SendGoal;

impl rosidl_runtime_rs::Service for MakeSquare_SendGoal {
    type Request = MakeSquare_SendGoal_Request;
    type Response = MakeSquare_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__MakeSquare_SendGoal() }
    }
}




#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__MakeSquare_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to turtle_interfaces__action__MakeSquare_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MakeSquare_GetResult;

impl rosidl_runtime_rs::Service for MakeSquare_GetResult {
    type Request = MakeSquare_GetResult_Request;
    type Response = MakeSquare_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__MakeSquare_GetResult() }
    }
}


