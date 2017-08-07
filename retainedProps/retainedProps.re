type retainedProps = { message: string };

let component = ReasonReact.statelessComponentWithRetainedProps "RetainedProps";

let make ::message _children => {
  ...component,
  retainedProps: { message: message },
  didUpdate: fun { oldSelf, newSelf } =>
    if (oldSelf.retainedProps.message !== newSelf.retainedProps.message) {
      Js.log "props `message` changed!"
    },
  render: fun _self => <div> (ReasonReact.stringToElement message) </div>
};
