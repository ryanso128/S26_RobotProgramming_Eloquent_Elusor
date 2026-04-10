#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to intro_interfaces__srv__Area_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Area_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub shape: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub size: rosidl_runtime_rs::BoundedSequence<f64, 2>,

}



impl Default for Area_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Area_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Area_Request {
  type RmwMsg = super::srv::rmw::Area_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shape: msg.shape.as_str().into(),
        size: msg.size,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shape: msg.shape.as_str().into(),
        size: msg.size.clone(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      shape: msg.shape.to_string(),
      size: msg.size,
    }
  }
}


// Corresponds to intro_interfaces__srv__Area_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Area_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Area_Response {
  type RmwMsg = super::srv::rmw::Area_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        area: msg.area,
        errflag: msg.errflag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      area: msg.area,
      errflag: msg.errflag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      area: msg.area,
      errflag: msg.errflag,
    }
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


