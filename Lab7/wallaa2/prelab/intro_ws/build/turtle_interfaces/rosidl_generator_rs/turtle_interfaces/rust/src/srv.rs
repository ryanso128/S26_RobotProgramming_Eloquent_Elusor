#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to turtle_interfaces__srv__SetColors_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetColors_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetColors_Request {
  type RmwMsg = super::srv::rmw::SetColors_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        turtle_rgb: msg.turtle_rgb,
        pen_rgb: msg.pen_rgb,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        turtle_rgb: msg.turtle_rgb,
        pen_rgb: msg.pen_rgb,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      turtle_rgb: msg.turtle_rgb,
      pen_rgb: msg.pen_rgb,
    }
  }
}


// Corresponds to turtle_interfaces__srv__SetColors_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetColors_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SetColors_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetColors_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetColors_Response {
  type RmwMsg = super::srv::rmw::SetColors_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
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


