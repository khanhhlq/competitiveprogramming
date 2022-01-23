const main = document.getElementById('form');
const activeData = document.getElementById('activeData');
main.addEventListener('submit', function () {
    event.preventDefault(); // No F5
    let checkDataUser = {
        dataUser: main.dataUser.value.trim()
    }

    if (checkDataUser.dataUser == "Luke") {
        activeData.innerHTML =
        `<div>Name: Luke</div>
        <span>Data: Xin chào tôi tên là Luke và tôi có nhiệm vụ là phải đi tìm bạn và đưa cho bạn một thứ này! Đó chính là mật mã mà bạn cần phải giải.
        <a href="https://www.mediafire.com/file/9w8vljqshqa4692/crypto.rar/file">
            <p>Tải về đi mày!</p>
        </a>
        </span>`;
        
    }

});

const result = document.getElementById('result');
result.addEventListener('submit', function () {
    event.preventDefault(); // No F5
    let checkResult = {
        result: result.result.value.trim()
    }

    if (checkResult.result == "HAVEAGOODDAYBRO") {
        alert("Chính xác!");       
    } else{
        alert("sai ròi")
    }

});

