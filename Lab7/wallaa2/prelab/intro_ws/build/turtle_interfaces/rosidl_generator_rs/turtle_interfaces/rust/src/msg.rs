#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to turtle_interfaces__msg__TurtlePose

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TurtlePose::default())
  }
}

impl rosidl_runtime_rs::Message for TurtlePose {
  type RmwMsg = super::msg::rmw::TurtlePose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        heading: msg.heading,
        position: msg.position,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      heading: msg.heading,
        position: msg.position,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      heading: msg.heading,
      position: msg.position,
    }
  }
}


