const element = <h1> Hello, world</h1>
ReactDOM.render(
    element,
    document.getElementById('root')
);

<div id = "root"></div>

function tick(){
    const element = (
        <div>
            <h1>Hello, world</h1>
            <h2> It is {new Date().toLocaleTimeString()}.</h2>         
        </div>
    );
    ReactDOM.render(element, document.getElementById('root'));
}

setInterval(tick,1000);// runs tick every 1000ms or 10s



