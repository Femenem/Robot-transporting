// Auto-generated. Do not edit!

// (in-package double_ackermann.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class DoubleAckermann {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.speed = null;
      this.steering = null;
      this.ackermann = null;
    }
    else {
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = 0.0;
      }
      if (initObj.hasOwnProperty('steering')) {
        this.steering = initObj.steering
      }
      else {
        this.steering = 0.0;
      }
      if (initObj.hasOwnProperty('ackermann')) {
        this.ackermann = initObj.ackermann
      }
      else {
        this.ackermann = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DoubleAckermann
    // Serialize message field [speed]
    bufferOffset = _serializer.float32(obj.speed, buffer, bufferOffset);
    // Serialize message field [steering]
    bufferOffset = _serializer.float32(obj.steering, buffer, bufferOffset);
    // Serialize message field [ackermann]
    bufferOffset = _serializer.int8(obj.ackermann, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DoubleAckermann
    let len;
    let data = new DoubleAckermann(null);
    // Deserialize message field [speed]
    data.speed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steering]
    data.steering = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [ackermann]
    data.ackermann = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'double_ackermann/DoubleAckermann';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '14ebedf9d70c67329e96a47f57b9ca37';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # speed, positive forward, m/s
    float32 speed
    
    # steering, positive to the right, radians
    float32 steering
    
    # Four ackermann modes are available:
    # - 0: double ackermann (default),
    # - 1: crabbing (front and back in the same direction).
    # - 2: front ackermann.
    # - 3: back ackermann.
    int8 ackermann
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DoubleAckermann(null);
    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = 0.0
    }

    if (msg.steering !== undefined) {
      resolved.steering = msg.steering;
    }
    else {
      resolved.steering = 0.0
    }

    if (msg.ackermann !== undefined) {
      resolved.ackermann = msg.ackermann;
    }
    else {
      resolved.ackermann = 0
    }

    return resolved;
    }
};

module.exports = DoubleAckermann;
